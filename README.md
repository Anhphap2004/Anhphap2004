# 👋 Hi there, I'm **Anhh Phapp**

💻 *Software Developer* | 🌱 *Tech Explorer* | 🎶 *Old Music Lover*  

[![Typing SVG](https://readme-typing-svg.herokuapp.com?font=Fira+Code&pause=1000&color=F7A41D&width=650&lines=Backend+Developer;Fullstack+Web+Learner;Coding+with+passion+and+creativity;Music+%7C+Memories+%7C+Nostalgia)](https://git.io/typing-svg)

---

## 🌟 About Me  

✨ I’m **Phapp**, a passionate developer from Vietnam.  
I see coding not just as solving problems, but as **a way to craft stories, create beauty, and leave memories in every project**.  

- 🎓 Senior student in **Computer Science – Vinh University**  
- 💻 Specializing in **ASP.NET Core, Laravel, Spring Boot, React**  
- 🌱 Exploring **Cloud, DevOps, and AI**  
- 🎶 Love *old music*, nostalgia, and timeless memories  
- 🌌 Believe that **every bug is a challenge, every project is a journey**  

---

## 🚀 Tech Stack
<p>
  <img src="https://skillicons.dev/icons?i=dotnet,laravel,spring,react,java,php,python,cpp,html,css,js,github,git,vscode,visualstudio,mysql" />
</p>

---

## 📊 GitHub Stats
<p>
  <img src="https://github-readme-stats.vercel.app/api?username=Anhphap2004&show_icons=true&theme=radical" height="150"/>
  <img src="https://github-readme-stats.vercel.app/api/top-langs/?username=Anhphap2004&layout=compact&theme=radical" height="150"/>
</p>

<p>
  <img src="https://streak-stats.demolab.com?user=Anhphap2004&theme=radical" height="180"/>
</p>

---

## 🏆 GitHub Achievements
![Trophies](https://github-profile-trophy.vercel.app/?username=Anhphap2004&theme=radical&margin-w=10&margin-h=10&no-frame=true)

---

## 📈 Contribution Graph
![Activity Graph](https://github-readme-activity-graph.vercel.app/graph?username=Anhphap2004&theme=tokyo-night)

---

## 🐍 Snake Contribution (Enable with GitHub Actions)
⚡ To enable the snake animation:  

1. Go to your repo **Anhphap2004/Anhphap2004**  
2. Create folder `.github/workflows/`  
3. Add file `snake.yml` with this content:  

```yml
name: Generate Snake

on:
  schedule:
    - cron: "0 0 * * *"
  workflow_dispatch:

jobs:
  build:
    runs-on: ubuntu-latest
    steps:
      - uses: Platane/snk@v3
        with:
          github_user_name: Anhphap2004
          outputs: dist/github-contribution-grid-snake.svg
      - uses: actions/upload-artifact@v3
        with:
          name: snake
          path: dist/github-contribution-grid-snake.svg
      - name: Push to output branch
        uses: crazy-max/ghaction-github-pages@v4
        with:
          target_branch: output
          build_dir: dist
        env:
          GITHUB_TOKEN: ${{ secrets.GITHUB_TOKEN }}

![Snake animation](https://github.com/Anhphap2004/Anhphap2004/blob/output/github-contribution-grid-snake.svg)
