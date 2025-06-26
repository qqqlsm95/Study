using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Ch10_Class.Actor
{
    internal class ActorManager
    {
        public List<ActorBase> actorBases = new List<ActorBase>();

        // 주연 -> 엑스트라 -> 주연

        private ActorBase boss;

        public ActorManager(ActorBase boss)
        {
            boss = new MainActor("진수");
        }

        public void AddName(string value)
        {
            this.boss.AddName(value);
        }

        public List<ExtraActor> GetExtraActors()
        {
            List<ExtraActor> actors = new List<ExtraActor>();

            foreach (ActorBase actorBase in actorBases)
            {
                ExtraActor extraActorA = actorBase as ExtraActor;
                if (extraActorA != null)
                    actors.Add(extraActorA);
            }

            return actors;
        }

        public List<MainActor> GetMainActor()
        {
            List<MainActor> actors = new List<MainActor>();

            foreach (ActorBase actorBase in actorBases)
            {
                MainActor MainActorA = actorBase as MainActor;
                if (MainActorA != null)
                    actors.Add(MainActorA);
            }

            return actors;
        }
    }

}
